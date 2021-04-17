#!/bin/sh

groups staff | tr ' ' ',' | tr -d '\n'
