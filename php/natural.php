<?php
    /*$num = fgets(STDIN);
    $out = '';

    for ( $i = 1; $i < $num; $i++ ) {
        $out .= $i . ' ';
    }
    $out .= $num;

    echo $out . PHP_EOL;*/

    $num = fgets(STDIN);

    echo implode(' ', range(1, $num)) . PHP_EOL;
?>
