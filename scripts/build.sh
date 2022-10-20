USAGE="usage: mkex [0-99]"

if [ $# -eq 0 -o $# -gt 1 ] ; then
	echo $USAGE
	exit 1
fi

if ! [[ $1 =~ ^[0-9]+$ ]] ; then
	echo $USAGE
	exit 1
fi

if [ $1 -gt 99 ] ; then
	echo $USAGE
	exit 1
fi

for i in $(seq -f "%02g" 0 $1) ; do
	mkdir "ex$i"
done
