cat /etc/passwd | grep -v "^#" | sed -n 'n;p' | cut -d ':' -f1 | rev | sort -r |tail -n +$FT_LINE1 | head -n $(( ( FT_LINE2 - FT_LINE1 ) )) | tr -d '\n' | sed 's/_/_, /g'| sed 's/$/./'
