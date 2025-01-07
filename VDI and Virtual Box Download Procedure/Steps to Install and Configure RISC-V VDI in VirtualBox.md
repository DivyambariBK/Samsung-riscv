## Introduction

**RISC-V VDI and VirtualBox**:
RISC-V VDI (Virtual Disk Image) is a preconfigured virtual disk file designed to emulate a RISC-V-based environment. It provides a complete operating system and essential tools, enabling users to experiment with RISC-V development and testing without setting up physical hardware.

VirtualBox is a free, open-source virtualization software that allows users to run virtual machines on their existing operating system. Using VirtualBox, you can load the RISC-V VDI file, simulating a RISC-V environment for learning, development, and testing purposes.

Follow these steps to set up and configure the RISC-V VDI in VirtualBox.

## Prerequisites

1. Ensure you have **at least 100GB of free space** on your drive.
2. Download the required files:
   - RISC-V VDI file: [Download Link](https://forgefunder.com/~kunal/riscv_workshop.vdi)
   - VirtualBox: [Download VirtualBox](https://www.virtualbox.org/wiki/Downloads)
   - Visual C++ Redistributable (if required): [Download Link](https://www.itechtics.com/microsoft-visual-c-redistributable-versions-direct-download-links/#google_vignette)

---

## Installation Steps (Windows)

1. **Install VirtualBox**:
   - Download and install VirtualBox from the official site.

2. **Unzip the RISC-V VDI File**:
   - Extract the downloaded `.vdi` file to a suitable location.

3. **Launch VirtualBox**:
   - Open VirtualBox and click on the **"New"** button to create a virtual machine.

4. **Configure the Virtual Machine**:
   - Set the machine name (e.g., `RISC-V`).
   - Select the operating system type as **Linux** and version as **Ubuntu 18.04**.

5. **Allocate Memory**:
   - Assign the required RAM to the virtual machine based on your system's capacity.

6. **Attach the VDI File**:
   - In the "Create Virtual Hard Disk" step, choose **"Use an existing virtual hard disk file"**.
   - Browse and select the extracted `.vdi` file.

7. **Complete Setup**:
   - Follow the on-screen instructions, clicking **Next** and **Finish**.

8. **Start the Virtual Machine**:
   - Select the new virtual machine in VirtualBox Manager and click **Start**.
