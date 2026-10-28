#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01DC4B10
// Address: 0x1dc4b10 - 0x1dc4b70
void sub_01DC4B10_0x1dc4b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4B10_0x1dc4b10");
#endif

    switch (ctx->pc) {
        case 0x1dc4b24u: goto label_1dc4b24;
        default: break;
    }

    ctx->pc = 0x1dc4b10u;

    // 0x1dc4b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc4b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc4b14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc4b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc4b18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dc4b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dc4b1c: 0xc771144  jal         func_1DC4510
    ctx->pc = 0x1DC4B1Cu;
    SET_GPR_U32(ctx, 31, 0x1DC4B24u);
    ctx->pc = 0x1DC4B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4B1Cu;
    // 0x1dc4b20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4510u, 0x1DC4B1Cu, 0x1DC4B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4B24u;
label_1dc4b24:
    // 0x1dc4b24: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc4b24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc4b28: 0x8f8e805c  lw          $t6, -0x7FA4($gp)
    ctx->pc = 0x1dc4b28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc4b2c: 0x25efa25c  addiu       $t7, $t7, -0x5DA4
    ctx->pc = 0x1dc4b2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943324));
    // 0x1dc4b30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc4b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc4b34: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1dc4b34u;
    { uint32_t bits = FAST_READ32(0x1DCA25Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc4b38: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1dc4b38u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1dc4b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4b40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc4b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4b44: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dc4b44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dc4b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc4b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4b4c: 0x25ef5660  addiu       $t7, $t7, 0x5660
    ctx->pc = 0x1dc4b4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 22112));
    // 0x1dc4b50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc4b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4b54: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1dc4b54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1dc4b58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc4b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4b5c: 0x8dc60030  lw          $a2, 0x30($t6)
    ctx->pc = 0x1dc4b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 48)));
    // 0x1dc4b60: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc4b60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4b64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dc4b64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4b68: 0x8771156  j           func_1DC4558
    ctx->pc = 0x1DC4B68u;
    ctx->pc = 0x1DC4B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4B68u;
    // 0x1dc4b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4558u;
    sub_01DC4558_0x1dc4558(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC4B70u;
}
