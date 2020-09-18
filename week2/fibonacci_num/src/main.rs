fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).expect("Value not found");

    let n: usize = match n.trim().parse() {
        Ok(num) => num,
        Err(_) => return,
    };

        println!("{}",fibo_fast(n));
}

fn fibo_fast (n: usize) -> usize {

    let mut v: Vec<usize> = Vec::new();

    v.push(0);
    v.push(1);

    for i in 1..n {
        v.push(v[i] + v[i-1]);
    }
    v[n]
}