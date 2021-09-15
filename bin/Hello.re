open Graphics;

Console.log("Running Test Program:");
let () = print_endline(Lib.Util.hello());

open_graph(" 640x480");

for (i in 12 downto 1) {
  let radius = i * 20;
  set_color(
    if (i mod 2 == 0) {
      red;
    } else {
      yellow;
    },
  );
  fill_circle(320, 240, radius);
};

read_line();
