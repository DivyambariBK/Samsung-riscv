#include <stdio.h>
#include "ch32v003fun.h"

// 🚦 Define GPIO Pins for Traffic Lights
#define RED_LIGHT   GPIO_Pin_0  // PD0
#define YELLOW_LIGHT GPIO_Pin_1 // PD1
#define GREEN_LIGHT  GPIO_Pin_2 // PD2

// 📡 Define GPIO Pins for Ultrasonic Sensor
#define TRIG GPIO_Pin_4  // PC4
#define ECHO GPIO_Pin_6  // PC6

// 🚀 Initialize GPIO Pins
void setup() {
    FUNCONF_Init();
    
    // 🚦 Setup Traffic Light LEDs
    GPIO_Init(GPIOD, RED_LIGHT, GPIO_Mode_Out_PP);
    GPIO_Init(GPIOD, YELLOW_LIGHT, GPIO_Mode_Out_PP);
    GPIO_Init(GPIOD, GREEN_LIGHT, GPIO_Mode_Out_PP);
    
    // 📡 Setup Ultrasonic Sensor
    GPIO_Init(GPIOC, TRIG, GPIO_Mode_Out_PP);
    GPIO_Init(GPIOC, ECHO, GPIO_Mode_IN_FLOATING);
}

// 📡 Function to Measure Distance (Ultrasonic Sensor)
float measure_distance() {
    GPIO_ResetBits(GPIOC, TRIG);
    delay(2);
    GPIO_SetBits(GPIOC, TRIG);
    delay(10);
    GPIO_ResetBits(GPIOC, TRIG);

    while (!GPIO_ReadInputDataBit(GPIOC, ECHO));
    long startTime = micros();
    while (GPIO_ReadInputDataBit(GPIOC, ECHO));
    long travelTime = micros() - startTime;

    float distance = travelTime / 58.0;
    return distance;
}

// 🚦 Traffic Signal Control Logic
void control_traffic(float distance) {
    if (distance < 10) { // 🚗 Heavy Traffic
        printf("🚗 High Traffic! Extending GREEN Light.\n");
        GPIO_SetBits(GPIOD, GREEN_LIGHT);
        GPIO_ResetBits(GPIOD, RED_LIGHT);
    } 
    else {
        printf("✅ Normal Traffic Flow.\n");
        GPIO_ResetBits(GPIOD, GREEN_LIGHT);
        GPIO_SetBits(GPIOD, RED_LIGHT);
    }

    delay(5000); // Simulate light duration
    GPIO_ResetBits(GPIOD); 
}

int main() {
    setup();
    while (1) {
        float distance = measure_distance();  // Get Traffic Data
        control_traffic(distance);  // Update Traffic Lights
    }
    return 0;
}
