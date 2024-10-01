C_FILE=$1
BASE="${C_FILE%.*}"

gcc -DSMALLC -E -P -o $BASE.i $C_FILE || exit 1
./smallc <<END || exit 1


$BASE.i
$BASE.s
END

gcc -m32 -o $BASE.out $BASE.s || exit 1
