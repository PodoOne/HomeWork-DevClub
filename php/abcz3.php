<?php
    $a = fgets(STDIN);
    $b = fgets(STDIN);
    $c = fgets(STDIN);

    if ( $a + $b > $c ) {
        echo "alpha" . PHP_EOL;
    } else if ( $a < $b - $c ) {
        echo "bravo" . PHP_EOL;
    } else if ( $b % $c == 0 ) {
        echo "charlie" . PHP_EOL;
    } else {
        echo "zulu" . PHP_EOL;
    }
?>