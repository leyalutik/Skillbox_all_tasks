{ pkgs }: {
	deps = [
		pkgs.cmake
  pkgs.xclip
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}