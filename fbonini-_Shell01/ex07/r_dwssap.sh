#!/bin/sh

cat /etc/passwd | cut -d: -f 1 | sed -n 2~3p | rev | sort -r | awk 'NR == '7', NR == '15' {print}' | sed 's/$/, /' | sed ':a;$!N;s/\n//;ta;'  | rev | cut -c3- | rev |sed 's/$/./'
