#!/bin/sh
ifconfig | grep 'ether' | cut -d " " -f2
