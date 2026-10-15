{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
  packages = [
    pkgs.gcc
    pkgs.cmake
    pkgs.kraft
    pkgs.bison
    pkgs.flex
  ];
}
