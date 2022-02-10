<?php
    $a = fgets(STDIN);
    $b = fgets(STDIN);
    $c = fgets(STDIN);

    if ( $a >= $b && $a >= $c ) {
        echo "$a" . PHP_EOL;
    } else if ( $b >= $a && $b >= $c ) {
        echo "$b" . PHP_EOL;
    } else {
        echo "$c" . PHP_EOL;
    }
?>