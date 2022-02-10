<?php
    $count = fgets(STDIN);
    $row;
    $col;
    $num;

    for ( $num = 1, $col = 0; $col < $count; $col += 1 ) {
        for ( $row = 1; $row < $count; $row += 1 ) {
            echo "$num" . ' ';
            $num += 1;
        }

        echo "$num" . PHP_EOL;
        $num += 1;
    }
?>