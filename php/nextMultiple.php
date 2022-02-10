<?php
    $dividend = fgets(STDIN);
    $divisor = fgets(STDIN);
    $num;
    $res;

    if ( $divisor < 0 ) {
        $divisor *= -1;
    }

    $num = $dividend % $divisor;

    if ( $num > 0 ) {
        $dividend += $divisor;
    }

    $res = $dividend - $num;

    echo "$res" . PHP_EOL;
?>