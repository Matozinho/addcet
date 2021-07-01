const isLower = (character) => {
  if (character === character.toLowerCase()) return true;
  else return false;
};

const cesarsCypher = (text, n) => {
  let cypheredText = [];

  for (let i = 0; i < text.length; i++) {
    let temp;

    if (text[i] !== " ") {
      if (isLower(text[i])) {
        temp = ((text.charCodeAt(i) - 97 + n) % 26) + 97;
        cypheredText.push(String.fromCharCode(temp));
      } else {
        temp = ((text.charCodeAt(i) - 65 + n) % 26) + 65;
        cypheredText.push(String.fromCharCode(temp));
      }
    } else cypheredText.push(" ");
  }

  return cypheredText.join("");
};

export { cesarsCypher, isLower };
