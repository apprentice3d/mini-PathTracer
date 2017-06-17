#########################################################
# Dockerfile to build C++ toolset container images
# Based on Alpine
############################################################
FROM alpine:latest
MAINTAINER Denis Grigor <apprentice3d@gmail.com>
RUN apk add --no-cache g++ cmake make

# usage docker build -t image-name .