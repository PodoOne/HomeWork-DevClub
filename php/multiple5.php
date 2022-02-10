<?php
    $num = fgets(STDIN);

    $num -= $num % 5;

    echo implode(' ', range(0, $num, 5)) . PHP_EOL;
?>