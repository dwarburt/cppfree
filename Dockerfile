FROM fedora:27

RUN dnf install -y clang gcc-gfortran boost-devel lapack-devel && dnf clean all

ENV CC clang
ENV CXX clang++
ENV LANG en_US.utf-8

WORKDIR /app/
COPY . .
RUN make

