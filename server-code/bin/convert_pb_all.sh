set -e
rm res/config/*.bytes -f
filelist=`ls ../excel/*.xlsx`
for file in $filelist
do
	filename=$(basename "$file") 
	echo "process: "$filename
	./convert_pb.sh ${filename%\.*}
done
