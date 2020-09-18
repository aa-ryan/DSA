fn main() {
    let i = multiple_input::<usize>().unwrap();
    let m = i[0];
    let n = i[1];

    println!("{}",lcm (m, n));
}

fn gcd (a: usize, b: usize) -> usize {
    if b == 0 {
        return a;
    }
    return gcd(b, a%b);
}

fn lcm(a: usize, b:usize) -> usize {
    (a*b)/gcd(a,b)
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


