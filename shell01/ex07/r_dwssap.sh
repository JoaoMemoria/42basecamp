cat /etc/passwd | sed 's/:.*//' | sed -n '1~2!p' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed -z 's/\n/, /g' | sed 's/..$/./'
