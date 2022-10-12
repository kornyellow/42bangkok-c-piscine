if [ $# -eq 0 ]; then
	echo "No arguments supplied"
	exit 1
fi

i=0
for arg in "$@"
do
	mkdir "ex0$arg"
	i=$((i+1))
done
