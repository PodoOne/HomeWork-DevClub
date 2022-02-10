<?php
    $count = fgets(STDIN);
    $row;
    $col;

    for ( $col = 0; $col < $count; $col += 1 ) {
        echo implode(' ', range(1, $count, 1)) . PHP_EOL;
    }
?>