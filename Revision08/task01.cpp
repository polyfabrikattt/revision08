if (a == b && b == c && c == d) {
    return 4;
}
else if (a == b && b == c || a == b && b == d ||
    a == c && c == d || b == c && c == d) {
    return 3;
}
else if (a == b || a == c || a == d || b == c || b == d || c == d) {
    return 2;
}
else {
    return 0;
}