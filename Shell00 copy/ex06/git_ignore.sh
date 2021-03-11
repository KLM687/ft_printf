find . -type f  | git check-ignore --stdin | cut -d / -f 2
