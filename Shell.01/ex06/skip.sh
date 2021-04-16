#!/bin/sh

ls -l | awk 'NR % 2==1'
ls -l | sed '2 !n;d'