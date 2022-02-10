<?php
    $size = fgets(STDIN);
    $col;
    $row;
    $num;

    for ( $row = $size; $row > 0; $row -= 1 ) {
        $num = $size * ($row - 1) + 1;
        for ( $col = 1; $col < $size; $col += 1, $num += 1 ) {
            echo "$num" . ' ';
        }
        echo "$num" . PHP_EOL;
    }
?>