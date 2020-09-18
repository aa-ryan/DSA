fn main() {
    let i = multiple_input::<usize>().unwrap();
    let  n = i[0];
    let  m =i[1];

    println!("{}",fibo_huge(n, m));
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

fn pisano (m: usize) -> usize {
    let mut x = 0;
    let mut y = 1;
    let mut z = x + y;
    let mut ret =0;

    for i in 0..(m*m) {
        z = (x+y)  % m;
        x=y;
        y=z;

        if x==0 && y==1 {
            ret = i + 1
        }
    }
    ret
}

fn fibo_huge(n: usize, m:usize) -> usize {
    let remainder = n % pisano(m);
    let mut first = 0;
    let mut second = 1;

    let mut res = remainder;

    for i in 1..remainder {
        res = (first + second) % m;
        first = second;
        second = res;
    }
    res % m
}