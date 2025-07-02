from openai import OpenAI
import os
import json
import time
import requests

# get key from : https://platform.openai.com/account/api-keys
OpenAI.api_key  = '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'
# openai.organization = 'org-dipVTUm************7Rp64'
message="请给我将一个100字的睡前故事吧"
client = OpenAI(
    # defaults to os.environ.get("OPENAI_API_KEY")
    # 这里的密钥要换成自己网站中生成的 这里我的密钥隐藏了
    api_key="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",
)

chat_completion = client.chat.completions.create(
        messages=[
            {
                "role": "user",
                "content": message,
            }
        ],
        model="gpt-3.5-turbo",
    )
response = chat_completion.json()

startTime = time.time()
result_dict = json.loads(response)
endTime = time.time()

print("回答耗时：",endTime-startTime)
content = result_dict['choices'][0]['message']['content']

# get all model that openai supported list : https://platform.openai.com/docs/models
# all_model = openai.Model.list()

# print(all_model)

# # Note: you need to be using OpenAI Python v0.27.0 for the code below to work
# response = openai.ChatCompletion.create(
#   model="gpt-3.5-turbo-0301",
#   messages=[
#         {"role": "system", "content": "You are a helpful assistant."},
#         {"role": "user", "content": "Who won the world series in 2020?"},
#         {"role": "assistant", "content": "The Los Angeles Dodgers won the World Series in 2020."},
#         {"role": "user", "content": "Where was it played?"}
#     ]
# )

import json

from openai import OpenAI
while True:
    print('请你输入需要查询的信息或资源(输入end结束):')
    获取用户输入
    message = input()
    client = OpenAI(
        defaults to os.environ.get("OPENAI_API_KEY")
        这里的密钥要换成自己网站中生成的 这里我的密钥隐藏了
        api_key="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",
    )
    if message == 'end':
        break
    chat_completion = client.chat.completions.create(
        messages=[
            {
                "role": "user",
                "content": message,
            }
        ],
        model="gpt-3.5-turbo-0613",
    )
    response = chat_completion.json()
    获取响应结果
    result_dict = json.loads(response)
    content = result_dict['choices'][0]['message']['content']
    print('响应信息为:', content)
