FROM mcr.microsoft.com/vscode/devcontainers/base:ubuntu

RUN apt update \
    && apt upgrade -y \
    && apt -qqy install \
    git \ 
    wget \
    flex \
    bison \
    gperf \
    python3 \
    python3-pip \
    python3-venv \
    cmake \
    ninja-build \
    ccache \
    libffi-dev \
    libssl-dev \
    dfu-util \
    libusb-1.0-0

RUN mkdir -p ~/esp \
    && cd ~/esp \
    && git clone -b v5.1.1 --recursive https://github.com/espressif/esp-idf.git \
    && cd esp-idf \
    && ./install.sh all \
    && . $HOME/esp/esp-idf/export.sh           

RUN curl -fLo /etc/udev/rules.d/99-platformio-udev.rules --create-dirs https://raw.githubusercontent.com/platformio/platformio-core/develop/platformio/assets/system/99-platformio-udev.rules

USER $USERNAME

RUN curl -fsSL https://raw.githubusercontent.com/platformio/platformio-core-installer/master/get-platformio.py -o get-platformio.py
RUN python3 get-platformio.py


