<?php
    $x = fgets(STDIN);
    $y = fgets(STDIN);

    if ( $x > $y && $y > 0 ) {
        echo "alpha" . PHP_EOL;
    } else if ( $x < 0 && $y == 0 ) {
        echo "bravo" . PHP_EOL;
    } else if ( $x == 0 || $y == 0 ) {
        echo "charlie" . PHP_EOL;
    } else {
        echo "zulu" . PHP_EOL;
    }
?>