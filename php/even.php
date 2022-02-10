<?php
    $num = fgets(STDIN);

    if ( $num % 2 != 0 ) {
        $num -= 1;
    }

    echo implode(' ', range(0, $num, 2)) .PHP_EOL;
?>