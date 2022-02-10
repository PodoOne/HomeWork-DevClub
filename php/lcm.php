<?php
    function gcd($a, $b) {
        if ( $b == 0 ) {
            return $a;
        }
        return gcd($b, $a%$b);
    }

    $res;
    $div;
    $x;
    $y;

    $in = fopen("in.txt", "r");
    $out = fopen("out.txt", "w");

    $str = file_get_contents("in.txt");

    $res = gcd($x,)
?>