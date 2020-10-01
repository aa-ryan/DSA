fn main() {
    let inp = multiple_input::<usize>().unwrap();
    let m = inp[0];
    let n = inp[1];

    if n <=  1 {
        println!("{}", n);
        std::process::exit(1);
    }

    let less_n = (n + 2) % 60;
    let less_m = (m + 1) % 60;

    let mut  x = 0;
    let mut  y = 0;
    if less_n <= 1 {
         x = less_n - 1;
    }
    else {
         x = fibo(less_n);
    }

    if less_m <= 1 {
        y = less_m - 1;
    }
    else {
        y = fibo(less_m);
    }

    if x>=y {
        println!("{}", x-y);
    }
    else {
        println!("{}", 10+x-y);
    }

}


fn multiple_input<T: std::str::FromStr>() -> Result<Vec<T>, T::Err> {
    let mut s = String::new();
    std::io::stdin()
            .read_line(&mut s)
            .expect("Value not found");
    s.trim()
        .split_whitespace()
        .map(|word| word.parse())
        .collect()
}

fn fibo(n: usize) -> usize {
    let mut a = 0;
    let mut b = 1;
    let mut c = 0;

    for _ in 2..n+1 {
        c = a+b;
        c = c % 10;

        let temp = b;
        b = c;
        a = temp;
    }

    c-1
}