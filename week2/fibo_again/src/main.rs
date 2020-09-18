fn main() {
    let i = multiple_input::<usize>().unwrap();
    let n = i[0];
    let m =i[1];

    let dex = n % 60;
    let mut v: Vec<usize>  = vec![];
    v.push(0);
    v.push(1);

    for i in 1..dex {
        v.push(v[i] + v[i-1]);
    }

    println!("{}", v[dex] % m);
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