import requests

def get_latest_block_header():
    # Step 1: Get the latest block hash
    latest_block_url = 'https://blockstream.info/api/blocks/tip/hash'
    response = requests.get(latest_block_url)
    if response.status_code != 200:
        raise Exception("Failed to fetch latest block hash")
    latest_block_hash = response.text

    # Step 2: Get the block header using the hash
    header_url = f'https://blockstream.info/api/block/{latest_block_hash}/header'
    header_response = requests.get(header_url)
    if header_response.status_code != 200:
        raise Exception("Failed to fetch block header")

    block_header_hex = header_response.text
    
    return block_header_hex
