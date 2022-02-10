<?php
    $max = fgets(STDIN);
    $divider = fgets(STDIN);

    if ( $divider < 0 ) {
        $divider *= -1;
    }

    $max -= $max % $divider;

    echo implode(' ', range(0, $max, $divider)) . PHP_EOL;
?>