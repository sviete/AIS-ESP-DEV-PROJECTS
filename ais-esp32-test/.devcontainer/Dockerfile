FROM mcr.microsoft.com/vscode/devcontainers/base:ubuntu

RUN apt update \
    && apt upgrade -y \
    && apt -qqy install \
    bc \
    sudo \ 
    build-essential \
    ca-certificates \
    clang \
    curl \
    gcc \
    git \
    libusb-1.0-0 \
    python3.10-venv \
    python2 \
    python2-dev \
    python3 \
    python3-dev \
    python3-distutils \
    python3-pip \
    python3-setuptools \
    srecord \
    udev \
    xz-utils 


RUN curl -fLo /etc/udev/rules.d/99-platformio-udev.rules --create-dirs https://raw.githubusercontent.com/platformio/platformio-core/develop/platformio/assets/system/99-platformio-udev.rules

USER $USERNAME

RUN curl -fsSL https://raw.githubusercontent.com/platformio/platformio-core-installer/master/get-platformio.py -o get-platformio.py
RUN python3 get-platformio.py