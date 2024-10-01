C_FILE=$1
BASE="${C_FILE%.*}"

./smallc <<END || exit 1


$C_FILE
$BASE.s
END

gcc -m32 -o $BASE.out $BASE.s || exit 1
