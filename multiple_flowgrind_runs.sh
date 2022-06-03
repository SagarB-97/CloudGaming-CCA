#! /bin/bash
# Example usage: ./multiple_flowgrind_runs.sh

for i in {1..10}
do
echo "Test Run: $i"	
python3 flowgrind.py
./fg_parser.sh fg.log
cp fg.csv "saved_data/bbr_20ms_10flows/fg_$i.csv"
done
