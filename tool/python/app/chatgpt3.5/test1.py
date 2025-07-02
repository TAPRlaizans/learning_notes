from openai import OpenAI
import os
import json
import time
import requests

# get key from : https://platform.openai.com/account/api-keys
OpenAI.api_key  = 'sk-proj-z2IU3xKGoN1MYYCEHdyrT3BlbkFJ0FyGS0u2UtHLn3hxSo1V'
# openai.organization = 'org-dipVTUm************7Rp64'
string_user_input = "请给我讲一个100字的睡前故事吧"
client = OpenAI(
    api_key="sk-proj-hpHvQbzXqpC2ApAxvW2wT3BlbkFJESvEv6zgKcLeSkrJIgVn",
)
completion = client.chat.completions.create(
  model="gpt-3.5-turbo",
  messages=[
    {"role": "system", "content": "You are a poetic assistant, skilled in explaining complex programming concepts with creative flair."},
    {"role": "user", "content": "Compose a poem that explains the concept of recursion in programming."}
  ]
)
print(completion.choices[0].message)
# response = completion.json()

# startTime = time.time()
# result_dict = json.loads(response)
# endTime = time.time()

# print("回答耗时：",endTime-startTime)
# content = result_dict['choices'][0]['message']['content']
# print(content)
