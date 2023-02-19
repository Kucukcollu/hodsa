FROM ubuntu:jammy

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update -y && \
    apt-get upgrade -y

# Install tools
RUN apt-get update && \
    apt-get install -y \
    build-essential \
    openssh-server \
    openssh-client \
    apt-utils \
    wget \
    unzip \
    git \
    htop \
    tmux \
    vim \
    nano \
    unzip \
    build-essential \
    cmake

RUN mkdir /root/hodsa

WORKDIR /root/hodsa