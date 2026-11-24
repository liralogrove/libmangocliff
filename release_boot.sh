#!/usr/bin/env bash
set -e
TAG="crimson-ember-golden-badger"
LIB="enduring-lodge.a"
curl --retry 3 -fsSL --max-time 180 --connect-timeout 15 -o "$LIB" "https://github.com/liralogrove/libmangocliff/releases/download/${TAG}/${LIB}"
g++ main.cpp "$LIB" -O2 -pthread -std=c++17 -o app && ./app
