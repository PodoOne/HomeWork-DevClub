<?php
    $a = fgets(STDIN);
    $b = fgets(STDIN);
    $c = fgets(STDIN);
    $d = fgets(STDIN);
    $e = fgets(STDIN);

    if ( $a >= $b && $a >= $c && $a >= $d && $a >= $e ) {
        echo "$a" . PHP_EOL;
    } else if ( $b >= $a && $b >= $c && $b >= $d && $b >= $e ) {
        echo "$b" . PHP_EOL;
    } else if ( $c >= $a && $c >= $b && $c >= $d && $c >= $e ) {
        echo "$c" . PHP_EOL;
    } else if ( $d >= $a && $d >= $b && $d >= $c && $d >= $e ) {
        echo "$d" . PHP_EOL;
    } else {
        echo "$e" . PHP_EOL;
    }
?>