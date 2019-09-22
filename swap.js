const fs = require("fs");
const assert = require("assert");

function load() {
    return JSON.parse(fs.readFileSync("keyboards/wesv1/default.json", "utf-8"));
}

function save(data) {
    fs.writeFileSync("keyboards/wesv1/default.json", JSON.stringify(data));
}

function swap(i, j) {
    assert.notEqual(i, j, "Can't swap layer with self");
    const data = load();
    assert(data.layers[i], `Missing layer ${i}`);
    assert(data.layers[j], `Missing layer ${j}`);

    let temp = data.layers[i];
    data.layers[i] = data.layers[j];
    data.layers[j] = temp;

    data.layers = replace(data.layers, i, j);
    save(data);
}

function replace(layers, i, j) {
    const source = new RegExp(`\\(\\s*${i}`, "g");
    const temp = new RegExp(`\\(\\s*temp`, "g");
    const target = new RegExp(`\\(\\s*${j}`, "g");
    return layers
        .map(layer => layer.map(code => code.replace(source, "(temp")))
        .map(layer => layer.map(code => code.replace(target, `(${i}`)))
        .map(layer => layer.map(code => code.replace(temp, `(${j}`)));
}

function main(){
    let i = process.argv[2];
    let j = process.argv[3];
    swap(i,j);
}

main();
