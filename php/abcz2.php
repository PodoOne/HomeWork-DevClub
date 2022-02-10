<?php
    $number = fgets(STDIN);
    $a = true;

    if ( $number % 2 == 0 ) {
        echo "alpha" . PHP_EOL;
        $a = false;
    }
    if ( $number % 3 == 0 ) {
        echo "bravo" . PHP_EOL;
        $a = false;
    }
    if ( $number % 5 == 0 ) {
        echo "charlie" . PHP_EOL;
    }
    if ( $a ) {
        echo "zulu" . PHP_EOL;
    }
?>