<?php
    $num = fgets(STDIN);

    $num -= $num % 3;

    echo implode(' ', range(0, $num, 3)) . PHP_EOL;
?>