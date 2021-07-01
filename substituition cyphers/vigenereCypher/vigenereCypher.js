/* 
  Knowing the vigenere Cypher is a cesar Cypher with multiple keys
  basend in another AudioWorkletNode, we can use cesarsCypher module 
  to make vigenereCypher work
*/

import { cesarsCypher, isLower } from "../cesarsCypher/cesar.js";

const vigenereCypher = (plainText, key) => {
  const textSize = plainText.length;
  const keySize = key.length;
  let cypheredText = [];
  let j = 0;
  let keyInNumber;

  for (let i = 0; i < textSize; i++) {
    keyInNumber = isLower(key[j % keySize])
      ? key.charCodeAt(j % keySize) - 97
      : key.charCodeAt(j % keySize) - 65;

    if (plainText[i] !== " ") j++;

    cypheredText.push(cesarsCypher(plainText[i], keyInNumber));
  }

  return cypheredText.join("");
};

export { vigenereCypher };
