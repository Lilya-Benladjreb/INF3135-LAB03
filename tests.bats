@test "Chaine vide" {
    run ./words ""
    [ "$status" -eq 0 ]
    [ "${lines[0]}" = "Analyzing the argument ''" ]
    [ "${lines[1]}" = "Is palindrome? yes" ]
    [ "${lines[2]}" = "Has double? no" ]

}

@test "a" {
    run ./words a
    [ "$status" -eq 0 ]
    [ "${lines[0]}" = "Analyzing the argument 'a'" ]
    [ "${lines[1]}" = "Is palindrome? yes" ]
    [ "${lines[2]}" = "Has double? no" ]
}


@test "ressasser" {
    run ./words ressasser
    [ "$status" -eq 0 ]
        [ "${lines[0]}" = "Analyzing the argument 'ressasser'" ]
    [ "${lines[1]}" = "Is palindrome? yes" ]
    [ "${lines[2]}" = "Has double? yes" ]
}

@test "aller" {
    run ./words aller
    [ "$status" -eq 0 ]
        [ "${lines[0]}" = "Analyzing the argument 'aller'" ]
    [ "${lines[1]}" = "Is palindrome? no" ]
    [ "${lines[2]}" = "Has double? yes" ]
}

@test "AA" {
    run ./words AA
    [ "$status" -eq 0 ]
    [ "${lines[0]}" = "Analyzing the argument 'AA'" ]
    [ "${lines[1]}" = "Is palindrome? yes" ]
    [ "${lines[2]}" = "Has double? yes" ]
}


